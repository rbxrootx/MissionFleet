// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438011 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00438011_00438011() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x438045
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 19h
        ; Exact mapped bytes 7D 6F: jge 0x4380ba
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x43805d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 55: jge 0x4380b8
        __asm _emit 0x7d
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 467ch]
        mov edx, 80h
        mov ecx, dword ptr [ebp - 0ch]
        sar edx, cl
        and eax, edx
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x4380b6
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 94 41 78 4B 00 00: movsx edx, word ptr [ecx + eax*2 + 0x4b78]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + 3590h]
        add edx, ecx
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [esi + eax*4 + 4618h]
        mov dword ptr [edx + ecx*4 + 4], eax
        ; Exact mapped bytes EB 9C: jmp 0x438054
        __asm _emit 0xeb
        __asm _emit 0x9c
        ; Exact mapped bytes EB 82: jmp 0x43803c
        __asm _emit 0xeb
        __asm _emit 0x82
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
