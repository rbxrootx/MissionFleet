// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D1E7 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0051d1e7_0051D1E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E 03 00 00: call 0x51d536
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 42h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 38h
        ; Exact mapped bytes E8 35 8C 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 40h
        or ch, 20h
        or ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 48h
        ; Exact mapped bytes E8 6E 8C 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 21 30 01 00: call 0x530273
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
