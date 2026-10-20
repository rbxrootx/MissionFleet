// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545E70 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00545e70_00545E70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x545e97
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b6h
        push 678fc8h
        ; Exact mapped bytes E8 AE 2E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545e97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x545e7a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 6790c4h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        ; Exact mapped bytes E8 2F FF FF FF: call 0x545ddd
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x545ec0
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes E8 B6 4C FD FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x545ec2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
