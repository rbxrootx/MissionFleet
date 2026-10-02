// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588614EC .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_588614ec() {
    __asm {
        // 0x588614EC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588614EE: push ebp
        __asm _emit 0x55
        // 0x588614EF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588614F1: push ecx
        __asm _emit 0x51
        // 0x588614F2: push ecx
        __asm _emit 0x51
        // 0x588614F3: push ebx
        __asm _emit 0x53
        // 0x588614F4: mov bl, byte ptr [ebp + 0x18]
        __asm _emit 0x8A
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x588614F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588614F9: push esi
        __asm _emit 0x56
        // 0x588614FA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588614FC: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x588614FF: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x58861502: call 0x58863f1f
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58861507: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5886150A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886150C: cmp word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x58861510: jge 0x5886151d
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x58861512: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58861515: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886151A: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x5886151D: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x5886151F: pop eax
        __asm _emit 0x58
        // 0x58861520: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58861524: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58861527: push eax
        __asm _emit 0x50
        // 0x58861528: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5886152A: push dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5886152D: lea eax, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58861530: push eax
        __asm _emit 0x50
        // 0x58861531: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58861534: push eax
        __asm _emit 0x50
        // 0x58861535: call 0x5886dda0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886153A: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5886153D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58861540: movsx cx, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xCB
        // 0x58861544: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58861546: pop esi
        __asm _emit 0x5E
        // 0x58861547: pop ebx
        __asm _emit 0x5B
        // 0x58861548: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5886154B: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5886154E: add dword ptr [edx], 2
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x02
        // 0x58861551: dec dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x58861553: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58861555: leave
        __asm _emit 0xC9
        // 0x58861556: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
