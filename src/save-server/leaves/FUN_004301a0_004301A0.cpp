// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004301A0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004301a0_004301A0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        mov ebx, dword ptr [esp + 18h]
        sub eax, edi
        mov edi, dword ptr [esp + 1ch]
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 77 0D: ja 0x4301cc
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebx + 4]
        mov ebp, dword ptr [ebx]
        sub ecx, ebp
        sar ecx, 1
        cmp edi, ecx
        ; Exact mapped bytes 76 0D: jbe 0x4301d9
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 CA 5B 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebx]
        sub eax, ecx
        mov ecx, dword ptr [esp + 20h]
        sar eax, 1
        sub eax, edi
        mov dword ptr [esp + 1ch], eax
        cmp eax, ecx
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 72 04: jb 0x4301f8
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 20h]
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        mov ebp, dword ptr [eax]
        sub edx, ecx
        mov eax, 7ffffffeh
        sar edx, 1
        sub eax, ebp
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x43021b
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 E8 5D 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov cl, byte ptr [esp + 20h]
        mov eax, dword ptr [ebx]
        add ebp, edi
        mov byte ptr [esp + 20h], cl
        lea edx, [esp + 20h]
        lea ecx, [eax + ebp*2]
        push edx
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        lea edx, [eax + edi*2]
        mov eax, dword ptr [esi]
        push edx
        lea edx, [eax + ecx*2]
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 1B 4F 00 00: call 0x435160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
