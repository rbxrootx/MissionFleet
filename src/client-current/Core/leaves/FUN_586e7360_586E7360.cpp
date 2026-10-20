// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7360 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_586e7360_586E7360() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586e737b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1a4h]
        ; Exact mapped bytes 7D 47: jge 0x586e73d0
        __asm _emit 0x7d
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0f4h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED 3D 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0d8h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 3D 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 188h], 80h
        ; Exact mapped bytes EB A2: jmp 0x586e7372
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 148h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
