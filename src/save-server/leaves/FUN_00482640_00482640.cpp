// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482640 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00482640_00482640() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x482672
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63fbech
        push 0
        push 3ah
        push 63fbe0h
        push 2
        ; Exact mapped bytes E8 F7 A7 FE FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x482672
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x48264e
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x482691
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], 0
        ; Exact mapped bytes EB 27: jmp 0x4826b8
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A6 95 FF FF: call 0x47bc40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2A 00 00 00: call 0x4826d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FB 95 FF FF: call 0x47bcb0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
