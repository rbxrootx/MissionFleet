// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588685C6 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_588685c6_588685C6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 204h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 0D 4C 74 90 58 FF: or dword ptr [0x5890744c], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        lea eax, [ebp - 204h]
        ; Exact mapped bytes 83 0D 40 74 90 58 FF: or dword ptr [0x58907440], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        push esi
        push edi
        xor edi, edi
        push eax
        ; Exact mapped bytes 89 3D C8 98 96 58: mov dword ptr [0x589698c8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C FB FF FF: call 0x5886811b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        xor ecx, ecx
        lea edx, [ebp - 204h]
        cmp eax, edx
        mov esi, eax
        cmove esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58868621
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 39 38: cmp word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x38
        ; Exact mapped bytes 74 09: je 0x58868621
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 BB FB FF FF: call 0x588681d9
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 05: jmp 0x58868626
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 46 FE FF FF: call 0x5886846c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 E4 45 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 17 8A FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
