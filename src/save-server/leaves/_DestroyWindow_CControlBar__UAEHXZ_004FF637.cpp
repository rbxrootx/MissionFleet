// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF637 .. +0x42 bytes.
extern "C" __declspec(naked) void _DestroyWindow_CControlBar__UAEHXZ_004FF637() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 24: je 0x4ff66d
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 62 01 00: call 0x51587a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4ff66d
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 61 01 00: call 0x5157ff
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 08: jmp 0x4ff675
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 16 FD FF: call 0x4d0d22
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
