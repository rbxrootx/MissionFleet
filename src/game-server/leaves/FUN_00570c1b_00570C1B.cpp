// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570C1B .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00570c1b_00570C1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 128h
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 26 A5 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 F4 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x570c5f
        __asm _emit 0x75
        __asm _emit 0x14
        push 12ch
        push 5d0930h
        ; Exact mapped bytes E8 A6 3D FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570c5f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x570c45
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 0C 01 00 00: call dword ptr [eax + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
