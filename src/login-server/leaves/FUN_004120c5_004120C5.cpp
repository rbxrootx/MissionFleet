// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004120C5 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004120c5_004120C5() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 5ch]
        cmp eax, -1
        ; Exact mapped bytes 74 1C: je 0x4120ec
        __asm _emit 0x74
        __asm _emit 0x1c
        push eax
        push 0
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 AC A4 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4120ec
        __asm _emit 0x75
        __asm _emit 0x04
        or dword ptr [esi + 5ch], 0ffffffffh
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
