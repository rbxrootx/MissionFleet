// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446E97 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00446e97_00446E97() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8dch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8e0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8e8h], 0
        ; Exact mapped bytes 74 0E: je 0x446ef3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 B9 73 03 00: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 18 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
