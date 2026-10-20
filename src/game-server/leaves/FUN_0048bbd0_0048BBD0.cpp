// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048BBD0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0048bbd0_0048BBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 EC FF FF: call 0x48a8af
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x48bbf9
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 10 14 06 00: call 0x4ed009
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 DA CB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
