// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A980 .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_1002a980_1002A980() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebp, 4
        lea edi, [esi + 50h]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi + 94h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, edx
        mov edx, 0
        sets dl
        dec edx
        and edx, eax
        push edx
        ; Exact mapped bytes E8 75 47 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 DC: jne 0x1002a98d
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edi, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 98h]
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        mov ecx, dword ptr [esi + edx*4 + 50h]
        ; Exact mapped bytes E8 05 43 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        push 100h
        mov ecx, dword ptr [esi + eax*4 + 50h]
        ; Exact mapped bytes E8 41 47 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov edx, dword ptr [edi]
        mov dword ptr [esi + ecx*8 + 60h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [esi + ecx*8 + 64h], eax
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [esi + ecx*4 + 80h], 0
        mov edx, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 30h]
        mov edi, dword ptr [esi + edx*8 + 60h]
        lea eax, [esi + edx*8 + 60h]
        mov edx, dword ptr [ecx + 4]
        sub edi, edx
        mov dword ptr [eax], edi
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 30h]
        lea eax, [esi + eax*8 + 64h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [eax]
        sub ecx, edx
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esi + 98h]
        lea ecx, [esi + eax*8 + 64h]
        mov eax, dword ptr [esi + eax*8 + 64h]
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esi + 98h]
        inc ecx
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x1002aa6f
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov dword ptr [esi + 98h], ecx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
