// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886264C .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5886264c_5886264C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, 1e13380h
        push ebx
        push esi
        push edi
        mov ebx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        push 0
        push ecx
        push eax
        push ebx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 70 AA 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        lea eax, [edi + 46h]
        push eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 06 FE FF FF: call 0x58862484
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, 15180h
        imul ecx
        mov esi, edx
        mov ecx, eax
        mov eax, edi
        mov edx, 1e13380h
        mov edi, dword ptr [ebp - 8]
        imul edx
        sub ebx, eax
        sbb edi, edx
        sub ebx, ecx
        sbb edi, esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], edi
        test edi, edi
        ; Exact mapped bytes 7F 45: jg 0x588626ef
        __asm _emit 0x7f
        __asm _emit 0x45
        ; Exact mapped bytes 7C 04: jl 0x588626b0
        __asm _emit 0x7c
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 73 3F: jae 0x588626ef
        __asm _emit 0x73
        __asm _emit 0x3f
        mov eax, 1e13380h
        add ebx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi], ebx
        adc edi, 0
        dec eax
        push eax
        mov dword ptr [esi + 4], edi
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 F2 FD FF FF: call 0x588624be
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 74 14: je 0x588626e5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        add ebx, 15180h
        mov dword ptr [esi], ebx
        adc edi, 0
        mov dword ptr [esi + 4], edi
        mov byte ptr [eax], 1
        mov esi, dword ptr [ebp - 4]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
        mov esi, dword ptr [ebp - 4]
        push esi
        ; Exact mapped bytes E8 C6 FD FF FF: call 0x588624be
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 74 EB: je 0x588626e8
        __asm _emit 0x74
        __asm _emit 0xeb
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 1
        ; Exact mapped bytes EB E3: jmp 0x588626e8
        __asm _emit 0xeb
        __asm _emit 0xe3
    }
}
