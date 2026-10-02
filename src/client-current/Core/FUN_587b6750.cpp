// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6750 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_587b6750() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdc84h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 18: je 0x587b677e
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 05 00 00: call 0x587b6d70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x587b6861
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0ffffffffh
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 8], 0
        push 588bdc88h
        push 28h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 108h
        push ecx
        ; Exact mapped bytes E8 D2 D9 FF FF: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 130h], 0
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 134h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 15ch], 3
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 15dh], 3
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 15eh], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 160h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 164h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 16ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 170h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 15eh], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 168h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 190h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 194h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}
