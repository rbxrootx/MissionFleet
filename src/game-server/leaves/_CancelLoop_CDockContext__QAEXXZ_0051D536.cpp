// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D536 .. +0x58 bytes.
extern "C" __declspec(naked) void _CancelLoop_CDockContext__QAEXXZ_0051D536() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 00 00 00: call 0x51d58e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 F5 01 00: call 0x53cb44
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B F3 01 00: call 0x53c8da
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1F: je 0x51d58a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 EE 01 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 84h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
