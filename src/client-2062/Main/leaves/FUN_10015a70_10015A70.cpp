// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015A70 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_10015a70_10015A70() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 1D B0 50 17 10: mov ebx, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov al, byte ptr [esi + 0a8h]
        mov byte ptr [edi], al
        mov ecx, dword ptr [esi + 70h]
        lea eax, [edi + 1]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [edi + 3ch], ecx
        mov edx, dword ptr [esi + 7ch]
        mov dword ptr [edi + 40h], edx
        mov eax, dword ptr [esi + 84h]
        mov dword ptr [edi + 48h], eax
        ; Exact mapped bytes 66 8B 8E 80 00 00 00: mov cx, word ptr [esi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4F 44: mov word ptr [edi + 0x44], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x44
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edi + 34h], edx
        ; Exact mapped bytes 66 8B 86 9E 00 00 00: mov ax, word ptr [esi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 1A: mov word ptr [edi + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 74h]
        add edi, 1ch
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
