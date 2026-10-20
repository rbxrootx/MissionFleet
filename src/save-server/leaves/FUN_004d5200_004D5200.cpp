// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5200 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004d5200_004D5200() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 24h], ecx
        ; Exact mapped bytes E8 A0 C8 05 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 74 BE 68 00: call dword ptr [0x68be74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 13: jne 0x4d524b
        __asm _emit 0x75
        __asm _emit 0x13
        push 7f00h
        push 0
        ; Exact mapped bytes FF 15 74 BE 68 00: call dword ptr [0x68be74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 39 C3 FF FF: call 0x4d158d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
