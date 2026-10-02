// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885761B .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_5885761b() {
    __asm {
        // 0x5885761B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885761D: push ebp
        __asm _emit 0x55
        // 0x5885761E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857620: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58857623: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58857625: jne 0x5885763d
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58857627: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885762A: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885762D: call 0x58863f1f
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857632: push eax
        __asm _emit 0x50
        // 0x58857633: call 0x588561f5
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857638: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885763B: pop ebp
        __asm _emit 0x5D
        // 0x5885763C: ret
        __asm _emit 0xC3
        // 0x5885763D: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x58857640: push esi
        __asm _emit 0x56
        // 0x58857641: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58857643: lea eax, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x01
        // 0x58857646: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885764B: ja 0x58857658
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x5885764D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885764F: movzx eax, word ptr [eax + edx*2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x50
        // 0x58857653: and eax, dword ptr [ebp + 0xc]
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58857656: jmp 0x5885766f
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x58857658: cmp dword ptr [esi + 4], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x5885765C: jle 0x5885766d
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5885765E: push ecx
        __asm _emit 0x51
        // 0x5885765F: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58857662: push edx
        __asm _emit 0x52
        // 0x58857663: call 0x5886f0b2
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58857668: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885766B: jmp 0x5885766f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885766D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885766F: pop esi
        __asm _emit 0x5E
        // 0x58857670: pop ebp
        __asm _emit 0x5D
        // 0x58857671: ret
        __asm _emit 0xC3
    }
}
