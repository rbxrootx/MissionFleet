// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E760 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0047e760_0047E760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 62: jg 0x47e7de
        __asm _emit 0x7f
        __asm _emit 0x62
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5C: je 0x47e7de
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 9B 7A FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x47e7c2
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*8 + 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 1A: jmp 0x47e7dc
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x47e7d3
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x47e7dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 96: jmp 0x47e774
        __asm _emit 0xeb
        __asm _emit 0x96
        mov esp, ebp
        pop ebp
        ret
    }
}
