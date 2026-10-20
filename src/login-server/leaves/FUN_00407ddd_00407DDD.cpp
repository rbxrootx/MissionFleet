// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407DDD .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_00407ddd_00407DDD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 E2 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 449020h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AD DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 449028h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B0 D9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 449038h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 74 DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 449040h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5D DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 449048h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 45 DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 449050h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2D DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 128h
        push eax
        push 449058h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 16 DE 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 12ch
        push edx
        push 449060h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 19 D9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
