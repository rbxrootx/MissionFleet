// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855A76 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_58855a76_58855A76() {
    __asm {
        mov edi, edi
        push ebx
        push edi
        mov edi, ecx
        push dword ptr [edi + 28h]
        movzx eax, byte ptr [edi + 2dh]
        lea ebx, [edi + 3ch]
        push eax
        push dword ptr [edi + 4]
        push dword ptr [edi]
        ; Exact mapped bytes E8 86 C2 FF FF: call 0x58851d17
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 10h]
        add esp, 10h
        test al, al
        lea eax, [ecx + 4]
        ; Exact mapped bytes 74 36: je 0x58855ad4
        __asm _emit 0x74
        __asm _emit 0x36
        push esi
        mov dword ptr [edi + 10h], eax
        movzx esi, word ptr [ecx]
        mov ecx, ebx
        ; Exact mapped bytes E8 05 C1 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 8]
        mov ecx, dword ptr [ebx + 404h]
        test ecx, ecx
        push esi
        push eax
        cmove ecx, ebx
        lea eax, [edi + 34h]
        push ecx
        push eax
        ; Exact mapped bytes E8 46 80 01 00: call 0x5886db0c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58855aed
        __asm _emit 0x74
        __asm _emit 0x1f
        mov byte ptr [edi + 2ch], 1
        ; Exact mapped bytes EB 19: jmp 0x58855aed
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebx + 404h]
        test edx, edx
        mov dword ptr [edi + 10h], eax
        mov al, byte ptr [ecx]
        cmove edx, ebx
        mov byte ptr [edx], al
        mov dword ptr [edi + 34h], 1
        mov ecx, dword ptr [ebx + 404h]
        mov al, 1
        test ecx, ecx
        cmove ecx, ebx
        mov dword ptr [edi + 30h], ecx
        pop edi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
