// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00490A36 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_00490a36_00490A36() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e236h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 586c3ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 66: jne 0x490ad6
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x490a8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 73 40: jae 0x490ad6
        __asm _emit 0x73
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 75 14: jne 0x490ab6
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a5h
        push 5ca644h
        ; Exact mapped bytes E8 4F 3F 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x490ab6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x490a96
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + ecx*4]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB AC: jmp 0x490a82
        __asm _emit 0xeb
        __asm _emit 0xac
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 06 0D 00: call 0x561161
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
