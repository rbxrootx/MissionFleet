// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E0A0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0050e0a0_0050E0A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 00 00 00: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x50e0d2
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 5c68bch
        ; Exact mapped bytes E8 33 69 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e0d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x50e0bb
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], 1
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
