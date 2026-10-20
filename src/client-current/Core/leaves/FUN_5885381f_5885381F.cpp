// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885381F .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5885381f_5885381F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [eax]
        mov dl, byte ptr [esi]
        movzx eax, dl
        mov ecx, dword ptr [edi + 94h]
        cmp byte ptr [eax + ecx], 65h
        ; Exact mapped bytes 74 10: je 0x5885384f
        __asm _emit 0x74
        __asm _emit 0x10
        push ebx
        mov ebx, dword ptr [edi]
        inc esi
        mov dl, byte ptr [esi]
        movzx eax, dl
        test byte ptr [ebx + eax*2], 4
        ; Exact mapped bytes 75 F4: jne 0x58853842
        __asm _emit 0x75
        __asm _emit 0xf4
        pop ebx
        movzx eax, dl
        cmp byte ptr [eax + ecx], 78h
        ; Exact mapped bytes 75 03: jne 0x5885385b
        __asm _emit 0x75
        __asm _emit 0x03
        mov dl, byte ptr [esi + 2]
        mov eax, dword ptr [edi + 88h]
        lea ecx, [esi + 2]
        cmovne ecx, esi
        mov eax, dword ptr [eax]
        lea esi, [ecx + 1]
        mov al, byte ptr [eax]
        mov byte ptr [ecx], al
        mov al, byte ptr [esi]
        mov cl, dl
        mov byte ptr [esi], dl
        inc esi
        mov dl, al
        test cl, cl
        ; Exact mapped bytes 75 F3: jne 0x58853870
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        ret
    }
}
