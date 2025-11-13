<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C - Dynamic Memory</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            width: 100%;
            height: 100vh;
            background: linear-gradient(135deg, #0a0e27 0%, #1a1a2e 50%, #16213e 100%);
            display: flex;
            align-items: center;
            justify-content: center;
            font-family: 'Courier New', monospace;
            overflow: hidden;
            position: relative;
        }

        .background-grid {
            position: fixed;
            width: 100%;
            height: 100%;
            background-image:
                linear-gradient(0deg, transparent 24%, rgba(255, 0, 255, 0.03) 25%, rgba(255, 0, 255, 0.03) 26%, transparent 27%, transparent 74%, rgba(255, 0, 255, 0.03) 75%, rgba(255, 0, 255, 0.03) 76%, transparent 77%, transparent),
                linear-gradient(90deg, transparent 24%, rgba(0, 255, 255, 0.03) 25%, rgba(0, 255, 255, 0.03) 26%, transparent 27%, transparent 74%, rgba(0, 255, 255, 0.03) 75%, rgba(0, 255, 255, 0.03) 76%, transparent 77%, transparent);
            background-size: 50px 50px;
            z-index: 0;
            opacity: 0.1;
            animation: grid-scroll 30s linear infinite;
        }

        @keyframes grid-scroll {
            0% { transform: translateY(0); }
            100% { transform: translateY(50px); }
        }

        .scan-line {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 1px;
            background: linear-gradient(90deg, transparent, rgba(0, 255, 255, 0.5), transparent);
            animation: scan 6s linear infinite;
            z-index: 5;
            pointer-events: none;
        }

        @keyframes scan {
            0% { top: 0%; }
            100% { top: 100%; }
        }

        .circuit-lines {
            position: fixed;
            width: 100%;
            height: 100%;
            z-index: 1;
            pointer-events: none;
        }

        svg {
            width: 100%;
            height: 100%;
        }

        .circuit-path {
            stroke: rgba(0, 255, 255, 0.15);
            stroke-width: 2;
            fill: none;
            animation: circuit-pulse 4s ease-in-out infinite;
        }

        @keyframes circuit-pulse {
            0%, 100% { stroke: rgba(0, 255, 255, 0.1); }
            50% { stroke: rgba(0, 255, 255, 0.3); }
        }

        .circuit-dot {
            fill: rgba(0, 255, 255, 0.4);
            animation: dot-pulse 2s ease-in-out infinite;
        }

        @keyframes dot-pulse {
            0%, 100% { r: 3; opacity: 0.3; }
            50% { r: 5; opacity: 0.8; }
        }

        .particles {
            position: fixed;
            width: 100%;
            height: 100%;
            pointer-events: none;
            z-index: 0;
        }

        .particle {
            position: absolute;
            width: 2px;
            height: 2px;
            background: #00ffff;
            border-radius: 50%;
            box-shadow: 0 0 8px rgba(0, 255, 255, 0.6);
        }

        .container {
            position: relative;
            z-index: 2;
            width: 95%;
            max-width: 1200px;
            height: 600px;
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 60px;
            align-items: center;
        }

        .logo-section {
            display: flex;
            align-items: center;
            justify-content: center;
            perspective: 1000px;
            position: relative;
        }

        .logo-glow {
            position: absolute;
            width: 350px;
            height: 350px;
            background: radial-gradient(circle, rgba(0, 255, 255, 0.1) 0%, transparent 70%);
            border: 2px solid rgba(0, 255, 255, 0.2);
            border-radius: 50%;
            animation: orbit 8s linear infinite;
        }

        .logo-glow-2 {
            position: absolute;
            width: 280px;
            height: 280px;
            background: radial-gradient(circle, rgba(255, 0, 255, 0.05) 0%, transparent 70%);
            border: 1px solid rgba(255, 0, 255, 0.15);
            border-radius: 50%;
            animation: orbit 12s linear infinite reverse;
        }

        @keyframes orbit {
            0% { transform: rotate(0deg) scale(1); }
            100% { transform: rotate(360deg) scale(1); }
        }

        .c-logo {
            font-size: 280px;
            font-weight: 900;
            background: linear-gradient(135deg, #00ffff, #ff00ff, #00ff88, #00ffff);
            background-size: 300% 300%;
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            animation: gradient-shift 6s ease infinite, glow-pulse 3s ease-in-out infinite;
            filter: drop-shadow(0 0 30px rgba(0, 255, 255, 0.6)) drop-shadow(0 0 60px rgba(255, 0, 255, 0.4));
            text-shadow: 0 0 40px rgba(0, 255, 255, 0.3);
            line-height: 1;
            position: relative;
            z-index: 3;
        }

        @keyframes gradient-shift {
            0% { background-position: 0% 50%; }
            50% { background-position: 100% 50%; }
            100% { background-position: 0% 50%; }
        }

        @keyframes glow-pulse {
            0%, 100% {
                filter: drop-shadow(0 0 30px rgba(0, 255, 255, 0.6)) drop-shadow(0 0 60px rgba(255, 0, 255, 0.4));
                text-shadow: 0 0 40px rgba(0, 255, 255, 0.3);
            }
            50% {
                filter: drop-shadow(0 0 50px rgba(0, 255, 255, 0.8)) drop-shadow(0 0 80px rgba(255, 0, 255, 0.6)) drop-shadow(0 0 100px rgba(0, 255, 136, 0.3));
                text-shadow: 0 0 60px rgba(0, 255, 255, 0.6);
            }
        }

        .decorative-c-logos {
            position: absolute;
            width: 100%;
            height: 100%;
            pointer-events: none;
        }

        .small-c {
            position: absolute;
            font-size: 40px;
            font-weight: bold;
            color: rgba(0, 255, 255, 0.3);
            animation: float-logo 6s ease-in-out infinite;
            text-shadow: 0 0 15px rgba(0, 255, 255, 0.5);
        }

        .small-c-1 { top: 5%; left: 5%; animation-delay: 0s; }
        .small-c-2 { top: 10%; right: 8%; animation-delay: 1s; }
        .small-c-3 { bottom: 15%; left: 10%; animation-delay: 2s; }
        .small-c-4 { bottom: 10%; right: 5%; animation-delay: 1.5s; }

        @keyframes float-logo {
            0%, 100% { transform: translateY(0) translateX(0); opacity: 0.2; }
            50% { transform: translateY(-20px) translateX(15px); opacity: 0.5; }
        }

        .info-section {
            display: flex;
            flex-direction: column;
            gap: 25px;
        }

        .title {
            font-size: 42px;
            font-weight: bold;
            color: #00ffff;
            text-shadow: 0 0 20px rgba(0, 255, 255, 0.8);
            letter-spacing: 2px;
            margin-bottom: 10px;
            animation: title-glow 2s ease-in-out infinite;
        }

        @keyframes title-glow {
            0%, 100% { text-shadow: 0 0 20px rgba(0, 255, 255, 0.8); }
            50% { text-shadow: 0 0 40px rgba(0, 255, 255, 1), 0 0 20px rgba(255, 0, 255, 0.6); }
        }

        .subtitle {
            font-size: 14px;
            color: #ff00ff;
            text-shadow: 0 0 10px rgba(255, 0, 255, 0.6);
            letter-spacing: 1px;
            margin-bottom: 20px;
        }

        .info-box {
            background: rgba(0, 20, 40, 0.6);
            border: 2px solid #00ffff;
            border-radius: 3px;
            padding: 18px 24px;
            font-size: 13px;
            color: #00ff88;
            text-shadow: 0 0 10px rgba(0, 255, 136, 0.5);
            box-shadow: 0 0 20px rgba(0, 255, 255, 0.3), inset 0 0 15px rgba(0, 255, 255, 0.05);
            backdrop-filter: blur(5px);
            line-height: 1.6;
            animation: box-glow 3s ease-in-out infinite;
            position: relative;
            overflow: hidden;
        }

        .info-box::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            height: 1px;
            background: linear-gradient(90deg, transparent, #00ffff, transparent);
            animation: shimmer 2s infinite;
        }

        @keyframes shimmer {
            0% { transform: translateX(-100%); }
            100% { transform: translateX(100%); }
        }

        @keyframes box-glow {
            0%, 100% { box-shadow: 0 0 20px rgba(0, 255, 255, 0.3), inset 0 0 15px rgba(0, 255, 255, 0.05); }
            50% { box-shadow: 0 0 40px rgba(0, 255, 255, 0.5), 0 0 20px rgba(255, 0, 255, 0.2), inset 0 0 25px rgba(0, 255, 255, 0.1); }
        }

        .label {
            color: #ff00ff;
            font-weight: bold;
            text-shadow: 0 0 10px rgba(255, 0, 255, 0.6);
            margin-bottom: 5px;
        }

        .corner-accent {
            position: absolute;
            width: 50px;
            height: 50px;
            border: 2px solid #00ffff;
            box-shadow: 0 0 15px rgba(0, 255, 255, 0.5);
        }

        .corner-tl { top: 30px; left: 30px; border-right: none; border-bottom: none; }
        .corner-tr { top: 30px; right: 30px; border-left: none; border-bottom: none; }
        .corner-bl { bottom: 30px; left: 30px; border-right: none; border-top: none; }
        .corner-br { bottom: 30px; right: 30px; border-left: none; border-top: none; }

        @media (max-width: 900px) {
            .container {
                grid-template-columns: 1fr;
                gap: 40px;
            }
            .c-logo {
                font-size: 180px;
            }
        }
    </style>
</head>
<body>
    <div class="background-grid"></div>
    <div class="circuit-lines">
        <svg viewBox="0 0 1920 1080" preserveAspectRatio="xMidYMid slice">
            <!-- Top-left circuit network -->
            <path class="circuit-path" d="M 50 50 L 200 50 L 200 150 L 350 150 L 350 300"/>
            <path class="circuit-path" d="M 100 100 L 100 200 L 150 200"/>
            <path class="circuit-path" d="M 200 50 L 250 50 L 250 100"/>

            <!-- Bottom-right circuit network -->
            <path class="circuit-path" d="M 1800 900 L 1650 900 L 1650 800 L 1500 800 L 1500 650"/>
            <path class="circuit-path" d="M 1750 950 L 1750 850 L 1700 850"/>
            <path class="circuit-path" d="M 1650 900 L 1600 900 L 1600 850"/>

            <!-- Center connections -->
            <path class="circuit-path" d="M 900 200 L 900 400 L 800 400"/>
            <path class="circuit-path" d="M 1000 850 L 1000 650 L 1100 650"/>

            <!-- Decorative circuits -->
            <path class="circuit-path" d="M 400 500 L 550 500 L 550 600 L 650 600" opacity="0.5"/>
            <path class="circuit-path" d="M 1300 300 L 1450 300 L 1450 450 L 1350 450" opacity="0.5"/>

            <!-- Circuit dots -->
            <circle class="circuit-dot" cx="200" cy="50" r="3"/>
            <circle class="circuit-dot" cx="200" cy="150" r="3"/>
            <circle class="circuit-dot" cx="350" cy="150" r="3"/>
            <circle class="circuit-dot" cx="350" cy="300" r="3"/>
            <circle class="circuit-dot" cx="100" cy="100" r="3"/>
            <circle class="circuit-dot" cx="100" cy="200" r="3"/>

            <circle class="circuit-dot" cx="1800" cy="900" r="3"/>
            <circle class="circuit-dot" cx="1650" cy="900" r="3"/>
            <circle class="circuit-dot" cx="1650" cy="800" r="3"/>
            <circle class="circuit-dot" cx="1500" cy="800" r="3"/>
            <circle class="circuit-dot" cx="1500" cy="650" r="3"/>

            <circle class="circuit-dot" cx="900" cy="200" r="3"/>
            <circle class="circuit-dot" cx="900" cy="400" r="3"/>
            <circle class="circuit-dot" cx="800" cy="400" r="3"/>
        </svg>
    </div>
    <div class="scan-line"></div>
    <div class="particles" id="particles"></div>

    <div class="corner-accent corner-tl"></div>
    <div class="corner-accent corner-tr"></div>
    <div class="corner-accent corner-bl"></div>
    <div class="corner-accent corner-br"></div>

    <div class="container">
        <div class="logo-section">
            <div class="decorative-c-logos">
                <div class="small-c small-c-1">C</div>
                <div class="small-c small-c-2">C</div>
                <div class="small-c small-c-3">C</div>
                <div class="small-c small-c-4">C</div>
            </div>
            <div class="logo-glow"></div>
            <div class="logo-glow-2"></div>
            <div class="c-logo">C</div>
        </div>

        <div class="info-section">
            <div>
                <div class="title">MEMORY ALLOCATION</div>
                <div class="subtitle">DYNAMIC MEMORY MANAGEMENT SYSTEM</div>
            </div>

            <div class="info-box">
                <div class="label">CORE FUNCTIONS:</div>
                malloc_checked() • calloc() • realloc() • exit()
            </div>

            <div class="info-box">
                <div class="label">STATUS:</div>
                Dynamic heap allocation with error handling and fail-safe protocol
            </div>

            <div class="info-box">
                <div class="label">COMPILATION:</div>
                gcc -Wall -Werror -Wextra -pedantic -std=gnu89
            </div>

            <div class="info-box">
                <div class="label">PROTOCOL:</div>
                malloc() failure → exit(98) • Zero-byte memory safety
            </div>
        </div>
    </div>

    <script>
        const particlesContainer = document.getElementById('particles');

        for (let i = 0; i < 60; i++) {
            const particle = document.createElement('div');
            particle.className = 'particle';
            particle.style.left = Math.random() * 100 + '%';
            particle.style.top = Math.random() * 100 + '%';
            particle.style.animation = `float ${4 + Math.random() * 6}s infinite`;
            particle.style.animationDelay = Math.random() * 3 + 's';
            particlesContainer.appendChild(particle);
        }

        const style = document.createElement('style');
        style.textContent = `
            @keyframes float {
                0%, 100% {
                    transform: translateY(0) translateX(0);
                    opacity: 0.3;
                }
                50% {
                    transform: translateY(-40px) translateX(${Math.random() * 80 - 40}px);
                    opacity: 0.8;
                }
            }
        `;
        document.head.appendChild(style);
    </script>
</body>
</html>
