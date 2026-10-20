// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D354 .. +0x56 bytes.
extern "C" __declspec(naked) void FID_conflict__AfxGetScodeRangeString__YGPB_WJ_Z_0054D354() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x54d36a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 32: jae 0x54d3a2
        __asm _emit 0x73
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 589010h]
        ; Exact mapped bytes 7C 1F: jl 0x54d3a0
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 589014h]
        ; Exact mapped bytes 7F 0E: jg 0x54d3a0
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 589018h]
        ; Exact mapped bytes EB 04: jmp 0x54d3a4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB BF: jmp 0x54d361
        __asm _emit 0xeb
        __asm _emit 0xbf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
