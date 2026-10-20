// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C882 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_0056c882_0056C882() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 640d30h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 E2 FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 A4 C2 68 00: call dword ptr [0x68c2a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x56c8de
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 D6 84 FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x56c8de
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E F9 FF FF: call 0x56c230
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 DB 84 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
