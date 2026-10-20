// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005795CB .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_005795cb_005795CB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 128h
        push 67d108h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 76 0C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 F4 FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x57960f
        __asm _emit 0x75
        __asm _emit 0x14
        push 12ch
        push 67d108h
        ; Exact mapped bytes E8 36 F7 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57960f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5795f5
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
