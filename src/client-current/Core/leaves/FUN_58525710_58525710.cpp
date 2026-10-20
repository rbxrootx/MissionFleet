// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525710 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_58525710_58525710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58525730
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        sar ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 50: jge 0x58525788
        __asm _emit 0x7d
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        imul edx, dword ptr [ebp - 4], 11ch
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58525788
        __asm _emit 0x74
        __asm _emit 0x2e
        imul ecx, dword ptr [ebp - 4], 11ch
        add ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 46 1B F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        imul edi, dword ptr [ebp + 0ch], 11ch
        add edi, dword ptr [ebp + 8]
        mov ecx, 47h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 9D: jmp 0x58525725
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 1F 1B F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        imul edi, dword ptr [ebp + 0ch], 11ch
        add edi, dword ptr [ebp + 8]
        mov ecx, 47h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
