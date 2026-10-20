// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EC3B0 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_100ec3b0_100EC3B0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, dword ptr [esi + 0e74h]
        xor ebp, ebp
        mov ebx, 2e8h
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        mov dword ptr [esi + 3eb8h], ebp
        mov ecx, eax
        mov dword ptr [esi + 3ec0h], ebp
        shr ecx, 0ah
        shr eax, 1
        and ecx, 1fh
        and eax, 0ffh
        mov edx, ecx
        mov edi, eax
        neg edx
        neg edi
        mov dword ptr [esi + 3e94h], edx
        mov dword ptr [esi + 3e98h], eax
        mov dword ptr [esi + 3e9ch], edx
        mov dword ptr [esi + 3ea0h], edi
        mov dword ptr [esi + 3ea4h], ecx
        mov dword ptr [esi + 3ea8h], edi
        mov dword ptr [esi + 3each], ecx
        mov dword ptr [esi + 3eb0h], eax
        mov dword ptr [esi + 3eb4h], edx
        mov dword ptr [esi + 3ebch], ecx
        mov dword ptr [esi + 1270h], ebp
        mov dword ptr [esi + 1278h], ebp
        mov edx, dword ptr [esi + 0e74h]
        mov eax, 51eb851fh
        lea edi, [esi + 3d04h]
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        shr ecx, 1
        and ecx, 0ffh
        lea edx, [ecx + ecx*4]
        shl edx, 1
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [esi + 3e00h]
        sub edx, ecx
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esi + 1274h], edx
        mov edx, 0fffffffbh
        sub edx, ecx
        mov dword ptr [esi + 127ch], edx
        mov ecx, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 0F BF 54 0B C0: movsx edx, word ptr [ebx + ecx - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0xc0
        mov dword ptr [edi - 4], edx
        mov eax, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 0F BF 14 03: movsx edx, word ptr [ebx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x03
        shr ecx, 1
        and ecx, 0ffh
        sub ecx, edx
        mov edx, ebp
        mov dword ptr [edi], ecx
        mov eax, dword ptr [edi - 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        mov dword ptr [edi - 4], eax
        mov eax, dword ptr [edi]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        and edx, 80000007h
        mov dword ptr [edi], ecx
        ; Exact mapped bytes 79 05: jns 0x100ec4d5
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        shl edx, 2
        mov ecx, 1ch
        mov eax, ebp
        sub ecx, edx
        add ebx, 2
        cdq
        and edx, 7
        add edi, 8
        add eax, edx
        mov edx, dword ptr [esi + 0e74h]
        sar eax, 3
        mov edx, dword ptr [edx + eax*4 + 288h]
        mov eax, dword ptr [esp + 10h]
        shr edx, cl
        add eax, 4
        mov dword ptr [esp + 10h], eax
        and edx, 0fh
        inc ebp
        mov dword ptr [eax - 4], edx
        cmp ebx, 328h
        ; Exact mapped bytes 0F 8C 65 FF FF FF: jl 0x100ec482
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
