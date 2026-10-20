// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054445C .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_0054445c_0054445C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push 3ch
        push 0
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 51 14 F2 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ebp - 2dh], 1
        mov dword ptr [ebp - 4], 0
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x5444c1
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        lea eax, [ebp - 4]
        push eax
        push 5444c8h
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 5C B6 68 00: call dword ptr [0x68b65c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
