<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=30&duration=2800&pause=1500&color=6F42C1&center=true&vCenter=true&width=940&lines=ship-and-learn;DSA+%2B+CS+Fundamentals+%2B+AI%2FML;Daily+build+log+%E2%80%94+no+shortcuts%2C+no+black+boxes;Public+by+design.+Consistent+by+discipline." alt="Typing SVG" />

![Last commit](https://img.shields.io/github/last-commit/yxshas565/ship-and-learn?style=for-the-badge&color=6f42c1&labelColor=1a1a1a)
![Commit activity](https://img.shields.io/github/commit-activity/w/yxshas565/ship-and-learn?style=for-the-badge&color=1d9e75&labelColor=1a1a1a)
![Streak](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=1a1a1a&color=e24b4a&label=streak&query=%24.currentStreak.length&suffix=%20days&url=https%3A%2F%2Fgithub-readme-streak-stats.herokuapp.com%2F%3Fuser%3Dyxshas565%26json%3Dtrue)
![Repo size](https://img.shields.io/github/repo-size/yxshas565/ship-and-learn?style=for-the-badge&color=378add&labelColor=1a1a1a)
![License](https://img.shields.io/github/license/yxshas565/ship-and-learn?style=for-the-badge&color=ba7517&labelColor=1a1a1a)

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=120&section=header" width="100%" />

</div>

---

## What this actually is

Not a portfolio. A **live build log** — every day of grinding DSA, CS fundamentals, applied math, and ML/DL toward an AI/ML engineering role, tracked in public with nothing hidden. If a day was weak, the log says so. If a week was strong, the commits prove it.

This README itself is part of the system — it's built to be read the way an autonomous agent would trace a pipeline: nodes, signals, feedback loops. That's deliberate.

---

## The pipeline — agent's-eye view

Not "subjects in a list." This is how the pieces actually feed each other, the way an agent orchestrating this system would see it: signals in, state updated, signals out.

```mermaid
flowchart LR
    subgraph INPUT["📥 INPUT AGENTS"]
        direction TB
        I1["Foundations Agent<br/><sub>DSA · OS · DBMS · CN · OOPS</sub>"]
        I2["Math Agent<br/><sub>Linear Algebra · Calc · Prob-Stats</sub>"]
    end

    subgraph CORE["⚙️ SYNTHESIS AGENTS"]
        direction TB
        C1["Applied-ML Agent<br/><sub>Theory → working code</sub>"]
        C2["Project Agent<br/><sub>Ship it · explain it · defend it</sub>"]
    end

    subgraph LOOP["🔁 FEEDBACK LOOP"]
        direction TB
        L1["Daily-Practice Agent<br/><sub>Commits · problems · notes</sub>"]
    end

    subgraph OUTPUT["📤 OUTPUT"]
        direction TB
        O1["Interview-Ready State<br/><sub>Provable, defensible, real</sub>"]
    end

    I1 -->|"signal: concepts solidified"| C1
    I2 -->|"signal: math grounding"| C1
    C1 -->|"signal: theory validated"| C2
    C2 -->|"signal: shipped artifact"| O1
    C2 -->|"trace: what worked / what broke"| L1
    L1 -.->|"reinforcement signal"| I1
    L1 -.->|"reinforcement signal"| I2
    L1 -.->|"reinforcement signal"| C1

    style I1 fill:#1e2a1e,stroke:#3fae5c,color:#c9f0d4
    style I2 fill:#1e2a1e,stroke:#3fae5c,color:#c9f0d4
    style C1 fill:#1e2433,stroke:#3f7dae,color:#c9ddf0
    style C2 fill:#1e2433,stroke:#3f7dae,color:#c9ddf0
    style L1 fill:#2d1e33,stroke:#a13fae,color:#e8c9f0
    style O1 fill:#332a1e,stroke:#ae7d3f,color:#f0ddc9
```

**Read it like a system, not a syllabus:** two input agents feed a synthesis layer, synthesis produces shipped, defensible output, and the daily-practice loop constantly reinforces every upstream node instead of running once and stopping. Nothing here is linear-and-done — it's a closed loop that gets more reinforced the longer it runs.

---

## Live trackers

<div align="center">

### Commit pulse

![Stats](https://github-readme-stats.vercel.app/api?username=yxshas565&repo=ship-and-learn&show_icons=true&theme=radical&hide_title=true&bg_color=0d1117&border_color=6f42c1)

### Streak

![Streak](https://streak-stats.demolab.com?user=yxshas565&theme=radical&hide_border=true&background=0D1117)

### Contribution graph

![Activity graph](https://github-readme-activity-graph.vercel.app/graph?username=yxshas565&repo=ship-and-learn&theme=react-dark&hide_border=true&bg_color=0D1117&color=6f42c1&line=6f42c1&point=e24b4a)

</div>

> All three pull live from GitHub's public commit history on every page load — no manual updates, no stale numbers. If it says 0, that's real, not a placeholder.

---

## Progress state

| Node | State | Target |
|---|:---:|---|
| DSA (pattern-first) | 🟡 active | 150–200 problems |
| OS / DBMS / CN / OOPS | ⚪ queued | Interview-depth, once, done right |
| Aptitude | ⚪ queued | Spread across weeks |
| Linear Algebra | ⚪ queued | — |
| Probability & Statistics | ⚪ queued | — |
| Calculus | ⚪ queued | Light pass |
| Python for AI / Agents | ⚪ queued | — |
| ML & Deep Learning | ⚪ queued | Core algos + 1–2 architectures |
| Weekly ship | 🟢 running | Every week, no skips |
| Capstone (EdgeDaemon) | 🟢 running | Tied directly to Project Agent above |

🟢 running · 🟡 active-but-early · ⚪ queued — updated by hand alongside real commits, not vibes.

---

## Operating principles

- **Understand it, don't just prompt it.** Every AI-assisted build gets a note on *why*, not just *what* — the reasoning is the actual deliverable.
- **Daily > sporadic.** The loop above only reinforces if it runs continuously.
- **Public by design.** Gaps stay visible on purpose — a real log is more convincing than a curated one.
- **Depth before breadth.** Foundations fully, then applied ML, then everything downstream.

---

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=100&section=footer" width="100%" />

**Currently:** grinding foundations · **Loop status:** 🟢 live · **Next log:** `/logs/weekly`

</div>