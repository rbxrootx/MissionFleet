// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A8880 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_585a8880_585A8880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 103ch]
        test ecx, ecx
        ; Exact mapped bytes 74 78: je 0x585a890f
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [edx + 1044h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1044h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1040h]
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1040h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1040h], 0
        ; Exact mapped bytes 7F 33: jg 0x585a890f
        __asm _emit 0x7f
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 103ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1040h], 1388h
        ; Exact mapped bytes E8 F8 E8 F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 271dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 04 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
