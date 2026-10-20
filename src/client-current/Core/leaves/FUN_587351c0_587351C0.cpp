// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587351C0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587351c0_587351C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4768h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x587351fa
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 5E BE 0F 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbe
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
