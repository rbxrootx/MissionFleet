// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005534B6 .. +0x90 bytes.
extern "C" __declspec(naked) void _AfxGetIconInfo__YAXPBDPADAAI_Z_005534B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2ch
        ; Exact mapped bytes 74 34: je 0x553507
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x553507
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 90 9B F3 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 81 9B F3 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C1: jmp 0x5534c8
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x553539
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 60 9B F3 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 01 60 F5 FF: call 0x4a9530
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x60
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 09: jmp 0x553542
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
