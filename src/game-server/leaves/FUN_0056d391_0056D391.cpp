// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D391 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_0056d391_0056D391() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57feb0h
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
        sub eax, 0d4h
        mov dword ptr [ebp - 18h], eax
        push 737h
        push 5d053ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 8F DD F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A2 AB FE FF: call 0x557f82
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 40 01 00 00: call dword ptr [edx + 0x140]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x56d446
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 DC F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56d420
        __asm _emit 0x75
        __asm _emit 0x14
        push 740h
        push 5d053ch
        ; Exact mapped bytes E8 E5 75 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56d420
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56d3fb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 A7 01 FE FF: call 0x54d5d6
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E DA F8 FF: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
