// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005078D7 .. +0x6F bytes.
extern "C" __declspec(naked) void _GetDocumentCount_CDocManager__IAEHXZ_005078D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 65 F1 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 44: je 0x50793f
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 6F F1 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x50793d
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E0: jmp 0x50791d
        __asm _emit 0xeb
        __asm _emit 0xe0
        ; Exact mapped bytes EB B6: jmp 0x5078f5
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
