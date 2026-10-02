// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58861476 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_58861476() {
    __asm {
        // 0x58861476: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58861478: push ebp
        __asm _emit 0x55
        // 0x58861479: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886147B: push ecx
        __asm _emit 0x51
        // 0x5886147C: push ecx
        __asm _emit 0x51
        // 0x5886147D: push ebx
        __asm _emit 0x53
        // 0x5886147E: mov bl, byte ptr [ebp + 0x18]
        __asm _emit 0x8A
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x58861481: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58861483: push esi
        __asm _emit 0x56
        // 0x58861484: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58861486: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58861489: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x5886148C: call 0x58863f1f
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58861491: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x58861494: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58861496: cmp word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x5886149A: jge 0x588614b0
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x5886149C: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5886149F: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588614A4: pop ecx
        __asm _emit 0x59
        // 0x588614A5: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588614A8: je 0x588614ad
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588614AA: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588614AD: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x588614B0: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588614B2: pop eax
        __asm _emit 0x58
        // 0x588614B3: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x588614B7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588614BA: push eax
        __asm _emit 0x50
        // 0x588614BB: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588614BD: push dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588614C0: lea eax, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x588614C3: push eax
        __asm _emit 0x50
        // 0x588614C4: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x588614C7: push eax
        __asm _emit 0x50
        // 0x588614C8: call 0x5886dda0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588614CD: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588614D0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588614D3: movsx cx, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xCB
        // 0x588614D7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588614D9: pop esi
        __asm _emit 0x5E
        // 0x588614DA: pop ebx
        __asm _emit 0x5B
        // 0x588614DB: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588614DE: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588614E1: add dword ptr [edx], 2
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x02
        // 0x588614E4: dec dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588614E6: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588614E8: leave
        __asm _emit 0xC9
        // 0x588614E9: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
