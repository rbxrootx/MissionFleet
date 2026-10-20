// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484CF2 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_00484cf2_00484CF2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x484d22
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x484dcd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x484dc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2bch], -1
        ; Exact mapped bytes 74 6D: je 0x484dc8
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov dword ptr [ecx + edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and ah, 0fh
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 234h], eax
        mov eax, dword ptr [ebp - 4]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED D8 FF FF: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x484d19
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 09 3A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
