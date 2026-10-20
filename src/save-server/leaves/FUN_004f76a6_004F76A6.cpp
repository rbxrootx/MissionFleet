// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F76A6 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_004f76a6_004F76A6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea eax, [ebp + 18h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 FC FF FF: call 0x4f72d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 3C: je 0x4f7705
        __asm _emit 0x74
        __asm _emit 0x3c
        push 20h
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 7A FD FF FF: call 0x4f7464
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4f7703
        __asm _emit 0x75
        __asm _emit 0x15
        push -1
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 2E F4 FF FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC FC FF FF: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x4f7724
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 C8 BF 68 00: call dword ptr [0x68bfc8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 1F 47 FF FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
