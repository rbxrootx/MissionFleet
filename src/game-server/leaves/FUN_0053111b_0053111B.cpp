// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053111B .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0053111b_0053111B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x53113f
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0a9h
        push 5820d4h
        ; Exact mapped bytes E8 C6 38 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53113f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x531125
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C FD FF FF: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 14: jl 0x531169
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0aah
        push 5820d4h
        ; Exact mapped bytes E8 9C 38 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x531169
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x531145
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + edx]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
