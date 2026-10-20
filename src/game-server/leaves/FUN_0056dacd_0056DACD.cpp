// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056DACD .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_0056dacd_0056DACD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57feceh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 18h], eax
        push 812h
        push 5d053ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 53 D6 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF E9 FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x56db82
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4C D5 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56db5c
        __asm _emit 0x75
        __asm _emit 0x14
        push 81ch
        push 5d053ch
        ; Exact mapped bytes E8 A9 6E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56db5c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
