// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557F82 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00557f82_00557F82() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 14: je 0x557fac
        __asm _emit 0x74
        __asm _emit 0x14
        push 144h
        push 5cfa14h
        ; Exact mapped bytes E8 59 CA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557fac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x557f8c
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
