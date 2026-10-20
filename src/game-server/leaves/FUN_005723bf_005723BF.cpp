// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005723BF .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_005723bf_005723BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5801dfh
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
        sub eax, 6ch
        mov dword ptr [ebp - 18h], eax
        push 40dh
        push 5d0930h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 63 8D F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DF A0 FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 4B: jmp 0x57246f
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5F 8C F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572449
        __asm _emit 0x75
        __asm _emit 0x14
        push 417h
        push 5d0930h
        ; Exact mapped bytes E8 BC 25 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572449
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
