// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D400 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0045d400_0045D400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 15: je 0x45d435
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D7 FF 08 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 A0 02 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 96 B3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
