// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BEFA .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_0054befa_0054BEFA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eec4h
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
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 44 FF FF FF: call 0x54be62
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 67acd8h
        ; Exact mapped bytes E8 EC 46 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        push 1a1h
        push 679318h
        push 10h
        ; Exact mapped bytes E8 C2 01 F8 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x54bf5a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BA EF FF FF: call 0x54af0f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x54bf61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], edx
        push 651548h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 8F 99 F1 FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
