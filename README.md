# Technical Project Management System

## Project Description

### Authors
- Gurvansh Gill (200914200)
- Aaryan Goyal (210651560)
- Emal Bakhtari (190962970)
- Navid Jussab (169026742)
- William McMahon (210884920)

## Executive Summary
When beginning a technical project, there are various approaches a team may take according to their goals. Project management fills the gap between scratch and the end product by providing the team with resources to monitor and rearrange their timelines. With the assistance of software engineering, a system can be designed and implemented to fulfill this role and keep track of time. The aim of this proposal is to describe the current shortcomings and address how software engineering can potentially be used to bridge the gap.

## Problem Definition and Motivation
Project management is a key, ongoing component of the software development lifecycle. It allows developers to ensure that they are within the scope, timeline, and budget outlined. Traditionally, logging each team member's progress has been a challenging metric to account for, especially given that the responsibility is on the individual to present their work and determine their specific schedule for the phase of production. The motivation behind this project is to create a shared platform that provides transparency within the project for teams to better allocate their tasks to idle resources. Through timestamped, step-by-step monitoring of work completion, it becomes possible for stakeholders to visualize the progress.

## Proposed Solution, Methods, and Objectives
The proposed solution is a system that tracks the completion of tasks of varying weights by following each member's workflow day-by-day. For this project, each member is given equal permission to assign tasks to each other, allowing for flexibility within the team and application. Through this implementation, one single member would not be placed at the top of the hierarchy. Institutions may enforce their own rules regarding permissions at their discretion. Through this solution, team members can see the relative position of each member during the development cycle.

### “Dev” Class
Defines each team member and task, including the weights and deadlines of the tasks, as well as each team member's position title and expertise.

### Assignment Method
Creates a new task assigned to a specific team member by evaluating which team member is optimal for the task.

### Completion/Deletion Method
Marks a task as completed and archives it accordingly. If the task is no longer aligned with the team’s goals, it is marked as obsolete in the archive.

### Transfer Method
Re-assigns a task if it is determined that a specific task is not appropriately assigned to a particular team member, ensuring the task is given to someone with corresponding expertise.

### Late Method
Notifies the team about a backlog if a deadline has passed and a task has not been completed.

### Reminder Method
Notifies a team member when a deadline is approaching, prompting them to plan accordingly to meet the project’s set dates.

## Detailed Project Plan

### Project Proposal and Research
**Objectives:**
- Define the project scope, goals, and specific requirements for the system.
- Conduct research on existing project management tools and methodologies.

**Key Activities:**
- Initial Research: Study current project management tools and their features.
- Requirements Gathering: Identify key functionalities needed for the system, such as task assignment, progress tracking, and notifications.
- Project Proposal: Write a detailed project proposal and submit it for approval to your instructor.

### Design and Development
**Objectives:**
- Design the user interface and system architecture.
- Develop the core functionalities outlined in the project proposal.

**Key Activities:**
- System Design: Sketch the system architecture and user interface, potentially using tools like UML diagrams or wireframes.
- Prototyping: Start with creating a basic prototype that includes key features.
- Coding: Develop the system using a suitable programming language and follow best practices in coding.

### Testing and Iteration
**Objectives:**
- Test the system for bugs and usability issues.
- Refine and improve the system based on feedback.

**Key Activities:**
- Unit Testing: Test individual components for functionality and reliability.
- System Testing: Test the system to ensure it works under typical use cases.
- Feedback Collection: Use peers or potential users to gather feedback on the system’s usability and functionality.

### Documentation and Presentation
**Objectives:**
- Prepare comprehensive documentation of the system.
- Present the completed project to your class or examination board.

**Key Activities:**
- User Manual: Create a user manual that explains how to use the system.
- Final Report: Compile a final report that includes the development process, challenges faced, and the solutions implemented.

### Evaluation and Reflection
**Objectives:**
- Reflect on the project’s successes and challenges.
- Evaluate the learning outcomes and potential improvements.

**Key Activities:**
- Project Review: Review the entire project process and identify what worked well and what could be improved.
- Peer Review: Participate in peer reviews to get additional feedback and perspectives.

## Timeline
- **Weeks 1-2:** Planning and Research
- **Weeks 3-6:** Design and Development
- **Weeks 7-9:** Testing and Iteration
- **Weeks 10-11:** Documentation
- **Week 12:** Evaluation and Reflection

## Deliverables
- Final Design Report
- Video Showcasing System Output
- Upload Code Files to GitHub Repository

## References
- GeeksforGeeks. (2024, April 16). How to effectively track project progress for success. [GeeksforGeeks](https://www.geeksforgeeks.org/how-to-effectively-track-project-progress-for-success/).
- Parashar, N. (2023, December 13). How to contribute to open source Java projects. [Medium](https://medium.com/@niitwork0921/how-to-contribute-to-open-source-java-projects-ce908322cf2e).
- Oracle. (1993). ProgressMonitor (Java Platform SE 8). [Oracle](https://docs.oracle.com/javase/8/docs/api/javax/swing/ProgressMonitor.html).

