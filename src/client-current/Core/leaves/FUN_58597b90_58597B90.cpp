// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597B90 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_58597b90_58597B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 110h]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0b8h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        imul ecx, dword ptr [edx + 0b8h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        sub eax, 1
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 110h]
        mov esi, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [esi + 0b8h]
        add ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b0h]
        mov eax, dword ptr [edx + ecx*8 + 4]
        add eax, 300h
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + 0a06h]
        sub eax, 1
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 110h]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0b8h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        imul ecx, dword ptr [edx + 0b8h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        sub eax, 1
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 110h]
        mov esi, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [esi + 0b8h]
        add ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b0h]
        mov eax, dword ptr [edx + ecx*8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 D9 21 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd9
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 E2 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
