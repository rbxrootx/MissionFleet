// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F71D0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_588f71d0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov byte ptr [esi + 61h], 0
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x588f71f0
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes E8 DB 02 00 00: call 0x588f74c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 54 01 00 00: call 0x588f7340
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0ch]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 DE FB FF FF: call 0x588f6de0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 40 FF FF FF: call 0x588f7150
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 A9 02 00 00: call 0x588f74c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 22 01 00 00: call 0x588f7340
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
