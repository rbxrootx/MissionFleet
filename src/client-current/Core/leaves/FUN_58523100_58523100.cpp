// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523100 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_58523100_58523100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x58523154
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 49 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x49
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x5852314b
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A FC FF FF: call 0x58522d80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58523152
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB C5: jmp 0x58523119
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 58h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
