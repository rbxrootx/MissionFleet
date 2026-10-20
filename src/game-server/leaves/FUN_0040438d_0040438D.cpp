// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040438D .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_0040438d_0040438D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4043be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D AC 00 00 00: jge 0x404474
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4043da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 8B 00 00 00: jge 0x40446f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 7
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov edx, dword ptr [edx + eax*4]
        and edx, dword ptr [esi + ecx*4 + 40ch]
        test edx, edx
        ; Exact mapped bytes 75 5C: jne 0x40446a
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 7
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + ecx*4]
        or eax, dword ptr [esi + edx*4 + 40ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + edx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp - 4]
        shl edx, 5
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 184h], edx
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 184h]
        ; Exact mapped bytes EB 0C: jmp 0x404476
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x4043d1
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x4043b5
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
