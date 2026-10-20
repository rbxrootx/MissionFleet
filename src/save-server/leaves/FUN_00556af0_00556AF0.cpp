// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556AF0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00556af0_00556AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1eh
        push 67c630h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 54 37 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        push 640c30h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B 3F FF FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x556b33
        __asm _emit 0x75
        __asm _emit 0x11
        push 22h
        push 67c630h
        ; Exact mapped bytes E8 12 22 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556b33
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x556b1c
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
